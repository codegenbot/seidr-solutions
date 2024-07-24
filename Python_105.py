```
return ''.join([name_dict[i] if i < 10 else name_dict[int(i)] for i in [str(i) for i in arr if 1 <= i <= 19]]).replace("Twenty", "Tw").replace("Eighteen", "Eight")