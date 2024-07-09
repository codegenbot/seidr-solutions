def find_pair(n, numbers):
    numbers.sort()
    left = 0
    right = len(numbers) - 1
    
    while left < right:
        total = numbers[left] + numbers[right]
        
        if total == n:
            return str(numbers[left]) + "\n" + str(numbers[right])
        elif total < n:
            left += 1
        else:
            right -= 1
    
    return "No pair found"


n = int(input())
numbers = [int(x) for x in input().split()]
print(find_pair(n, numbers))