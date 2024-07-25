```
def search(lst):
    max_num = -1
    for num in lst:
        if num > 0 and (num == max_num or num > max_num):
            max_num = num
    return max_num if max_num != -1 else None

n = int(input())
input_lst = [int(num) for num in input().split()]
print(search(input_lst))