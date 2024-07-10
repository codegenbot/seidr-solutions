# Read input from user
input_list = []
n = int(input("Enter the number of strings: "))
for i in range(n):
    input_list.append(input("Enter string {}: ".format(i+1)))

# Call function with input list
result = match_parens(input_list)
print(result)