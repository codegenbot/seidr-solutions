input() # This will consume the first input which specifies the length of operations
n = int(input())
input_operations = list(map(int, input().split()))
print(below_zero(input_operations))