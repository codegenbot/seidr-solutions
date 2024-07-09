```
values = input("Enter values separated by space: ")
filtered_values = (int(i) for i in filter(None, map(str, values.split())))
print(list(filtered_values))