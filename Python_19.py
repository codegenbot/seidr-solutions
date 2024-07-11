```
return " ".join(map(lambda x: k for k, v in num_dict.items() if v == x), sorted_nums)