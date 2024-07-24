arr = [int(input("Enter numbers (1-9): ")) for _ in range(9)]
def by_length(arr):
    sorted_arr = sorted([str(i) for i in arr if 1 <= i <= 9])
    return [num_to_name[int(i)] for i in reversed(sorted_arr)]

def num_to_name(num):
    names = ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
    return names[num - 1]

print(by_length(arr))