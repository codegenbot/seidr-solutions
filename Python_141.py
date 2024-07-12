```
def file_name_check(file_name):
    if len(file_name) > 0:
        before_dot = file_name.split('.')[0]
        after_dot = file_name.split('.')[1]
        if (len(before_dot) <= 3 and 
            before_dot[0].isalpha() and
            after_dot in ['txt', 'exe', 'dll'] and
            len(file_name.split('.')) == 2):
            return 'Yes'
    return 'No'