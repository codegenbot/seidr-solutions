# Prompt user to enter space-separated integers
input_list = list(map(int, input("Enter space-separated integers: ").split()))
result = sum(input_list)
print(result)