```
def search(lst):
    frequency = {}
    for num in lst:
        if num > 0:
            frequency[num] = frequency.get(num, 0) + 1
    max_num = -1
    for k, v in frequency.items():
        if k >= v and k > max_num:
            max_num = k
    return max_num if max_num != -1 else -1

lst = list(map(int, input("Enter a list of numbers separated by space: ").split()))
print(search(lst))