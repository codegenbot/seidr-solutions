```
input_list = []
for i in range(int(input("Enter number of inputs: "))):
    s = input(f"Enter string {i+1}: ")
    input_list.append(s)

print(match_parens(input_list))