num_dict = {}
for num in input_string.split():
    if num not in num_dict:
        num_dict[num] = len(num_dict) + 1
return " ".join(str(num_dict[i]) for i in sorted(map(int, input_string.split())))