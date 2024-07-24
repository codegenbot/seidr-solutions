def sorted_list_sum(input_data):
    return ["".join(sorted("".join(x))) for x in input_data]

input_data = [input().split() for _ in range(int(input("Number of lists: ")))]
print(sorted_list_sum(input_data))