vector = []
while True:
    try:
        line = input().strip()
        if line == "":
            break
        num = int(line)
        vector.append(num)
    except:
        break

if len(vector) == 1:
    print(vector[0])
    print(vector[0])
    exit()

left_subvector, right_subvector = cut_vector(vector)
for num in left_subvector:
    print(num)
for num in right_subvector:
    print(num)