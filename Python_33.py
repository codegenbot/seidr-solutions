def sort_third(l: list[list[int]]) -> list:
    return [sorted(l[i : i + 3], key=lambda x: x[2]) for i in range(0, len(l), 3)]

# Example input: list of lists
input_list = [[5, 6, 3], [4, 8, 9], [2, 1, 7]]
output = sort_third(input_list)
print(output)