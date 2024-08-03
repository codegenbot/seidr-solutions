def double_the_difference(odd_sum):
    total = 0
    for num in [i**2 for i in range(1, odd_sum + 1)]:
        total += num
    return total


def check():
    n = int(input())
    lst = list(map(int, input().split()))
    odd_sum = sum(num for num in lst if num % 2 != 0)
    result = double_the_difference(odd_sum)
    print(result)


check()