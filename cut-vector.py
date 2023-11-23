# Read input from user
vector = []
while True:
    try:
        line = input()
        if line.strip() == "":
            break
        num = int(line)
        vector.append(num)
    except EOFError:
        break

# Call the function and print the output
subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
print()
for num in subvector2:
    print(num)