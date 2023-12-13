numbers = list(map(int, input().split()))

sum_so_far = 0
for i in range(len(numbers)):
    sum_so_far += numbers[i]
    if sum_so_far < 0:
        print(i)
        break