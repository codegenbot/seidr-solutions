```
def search(lst):
    freq_dict = {}
    for num in lst:
        if num in freq_dict:
            freq_dict[num] += 1
        else:
            freq_dict[num] = 1
    max_num = -1
    for key, value in freq_dict.items():
        if key > 0 and value >= key:
            max_num = key
    return max_num

input_str = input().strip()
try:
    input_lst = list(map(int, input_str.split()))
    print(search(input_lst))
except ValueError:
    print("Invalid input. Please enter a list of integers separated by spaces.")