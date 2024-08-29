```
def find_pair():
    n = int(input())
    numbers = [int(x) for x in input().split()]
    target = int(input())
    
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            if numbers[i] + numbers[j] == target:
                return '{}\n{}'.format(numbers[i], numbers[j])

print(find_pair())