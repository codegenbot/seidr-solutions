```
def get_unique_elements(my_list):
    return list(set(my_list))

def minPath(arr):
    # Calculate the minimum path sum
    # using the bottom-up approach
    for i in range(len(arr)):
        for j in range(len(arr[i])):
            if i == 0 and j == 0:
                continue
            elif i == 0:
                arr[i][j] += arr[i][j-1]
            elif j == 0:
                arr[i][j] += arr[i-1][j]
            else:
                arr[i][j] += min(arr[i-1][j], arr[i][j-1])
    return arr[-1][-1]

def main():
    # Test case 1:
    assert get_unique_elements([]) == []
    # Test case 2:
    assert get_unique_elements([1]) == [1]
    # Test case 3:
    assert get_unique_elements([1, 2, 3, 2, 1]) == [1, 2, 3]

if __name__ == "__main__":
    main()
```