```
def file_name_check(file_name):
    count = 0
    for char in file_name:
        if char.isdigit():
            count += 1
        if count > 3 or not char.isalpha() and char != '.':
            return 'No'
    if len(file_name) < 5 or file_name[-4:] not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'
```