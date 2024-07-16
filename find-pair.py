```
def find_pair():
    n = int(input())
    numbers = [int(x) for x in input().split()]
    target = int(input())
    
    for i in range(n-1):
        for j in range(i+1, n):
            if numbers[i] + numbers[j] == target:
                return '{}\n{}'.format(numbers[i], numbers[j])

print(find_pair())