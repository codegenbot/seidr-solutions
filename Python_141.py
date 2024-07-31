```
def file_name_check(file_name):
    if len(file_name) > 0:
        before_dot = file_name.split('.')[0]
        after_dot = file_name.split('.')[1]
        
        if (before_dot.isalpha() or before_dot == '') and len([c for c in before_dot if c.isdigit()]) <= 3 and len(file_name.split('.')) == 2 and after_dot in ['txt', 'exe', 'dll']:
            return 'Yes'
    return 'No'