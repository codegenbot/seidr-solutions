```
def sort_even(l: list):
    nums = [abs(x) for x in l]
    nums.sort()
    result = []
    i = 0
    for num in nums:
        if i % 2 == 0:
            result.append(-num)
        else:
            result.append(num)
        i += 1
    return result

if __name__ == "__main__":
    print(sort_even([5, 8, -12, 4, 23, 2, 3, 11, 12, -10]))