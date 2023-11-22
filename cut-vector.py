def cut_vector(vec):
    total = sum(vec)
    current_sum = 0
    for i, num in enumerate(vec[:-1]):
        current_sum += num
        if current_sum * 2 == total or current_sum * 2 + vec[i + 1] == total:
            return vec[: i + 1], vec[i + 1 :]
    return vec, [0]


# Read input from user
input_vec = []
while True:
    try:
        num = int(input())
        input_vec.append(num)
    except:
        break

# Call the function and print results
subvec1, subvec2 = cut_vector(input_vec)
for num in subvec1:
    print(num)
for num in subvec2:
    print(num)