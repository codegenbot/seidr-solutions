def double_the_difference(odd_sum):
    total = 0
    for num in range(1, odd_sum + 1):
        if num % 2 == 0:
            total += num**2
    return total


def check():
    n = int(input())
    lst = list(map(int, input().split()))
    odd_sum = sum(num for num in lst if num % 2 != 0)
    result = double_the_difference(odd_sum)
    print(result)


check()