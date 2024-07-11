```
def solution(lst):
    odd_sum = 0
    for i in lst[1::2]:
        if i % 2 != 0:
            odd_sum += i
    return odd_sum

if __name__ == "__main__":
    lst = list(map(int, input("Enter space-separated integers: ").split()))
    print(solution(lst))