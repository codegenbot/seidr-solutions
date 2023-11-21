def find_pair(vector, target):
    seen = set()
    for num in vector:
        complement = target - num
        if complement in seen:
            return complement, num
        seen.add(num)
    return None


# Read input
n = int(input())
vector = list(map(int, input().split()))
target = int(input())

# Find pair
result = find_pair(vector, target)

# Print output
print(result[0])
print(result[1])