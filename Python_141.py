```
def file_name_check(file_name):
    if len(file_name) > 0:
        before_dot = file_name.split('.')[0]
        after_dot = file_name.split('.')[1]
        if len(before_dot) > 0 and before_dot[0].isalpha():
            if len([c for c in before_dot if c.isdigit()]) > 3:
                return 'No'
            if after_dot not in ['txt', 'exe', 'dll']:
                return 'No'
        else:
            return 'No'
    return 'Yes'