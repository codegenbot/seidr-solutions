```
def search(lst):
    freq = {}
    max_num = -1
    for num in lst:
        if num > 0:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
        else:
            break
    else:  
        for num, count in freq.items():
            if num >= count and num > 0:
                max_num = num
                break
    if max_num == -1:
        max_num = 0
    return max_num


lst = input("Enter numbers separated by space: ")
try:
    lst = [int(i) for i in lst.split()]
except ValueError:
    print("Invalid input. Please enter numbers separated by spaces.")
    exit()
print(search(lst))