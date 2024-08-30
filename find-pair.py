```
def find_pair():
    n = int(input())
    numbers = [int(x) for x in input().split()]
    target = int(input())
    pairs = []
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            if numbers[i] + numbers[j] == target:
                return f"{numbers[i]} {numbers[j]}"
    return "No pair found"

print(find_pair())