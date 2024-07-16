n = int(input())
numbers = list(map(float, input().strip().split()))
if len(numbers) != n:
    print("Incorrect number of input values provided")
    exit()