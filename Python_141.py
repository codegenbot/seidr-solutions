```
def file_name_check(file_name):
    if '.' in file_name:
        before_dot = file_name[:file_name.index('.')]
        after_dot = file_name[file_name.index('.') + 1:]
        if len([i for i in before_dot if i.isdigit()]) > 3 or not before_dot[0].isalpha():
            return 'No'
        elif after_dot.lower() not in ['txt', 'exe', 'dll']:
            return 'No'
    else:
        if len([i for i in file_name if i.isdigit()]) > 3:
            return 'No'
        elif not file_name[0].isalpha():
            return 'No'
    return 'Yes'