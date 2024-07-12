```
def find_pair():
    n = int(input())
    numbers = list(map(int, input().split()))
    target = int(input())
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            if numbers[i] + numbers[j] == target:
                return "{} {}".format(numbers[i], numbers[j])

print(find_pair())