```
n = int(input())
if n <= 0:
    print(None)
else:
    input_lst = list(map(int, input().split()))
    print(search(input_lst))