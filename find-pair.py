```
def find_pair():
    n = int(input())
    pair_sum = int(input())
    numbers = list(map(int, input().split()))
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            if numbers[i] + numbers[j] == pair_sum:
                return str(numbers[i]) + '\n' + str(numbers[j])

print(find_pair())