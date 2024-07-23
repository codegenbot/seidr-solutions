```
def file_name_check(file_name):
    if '.' in file_name:
        left, right = file_name.split('.')
        if len(left) > 0 and left[0].isalpha() and sum(c.isdigit() for c in left) <= 3:
            if right.lower() in ['txt', 'exe', 'dll']:
                return 'Yes'
    return 'No'