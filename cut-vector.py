def cut_vector(vector):
    length = len(vector)
    if length % 2 == 0:
        mid = length // 2
    else:
        mid = length // 2 + 1
    return vector[:mid], vector[mid:]


# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

# Call the function and print the output
output1, output2 = cut_vector(vector)
for num in output1:
    print(num)
for num in output2:
    print(num)