```
def file_name_check(file_name):
    if '.' not in file_name:
        return 'No'
    before_dot = file_name.split('.')[0]
    after_dot = file_name.split('.')[1]
    if not before_dot or not before_dot[0].isalpha():
        return 'No'
    if len([c for c in before_dot if c.isdigit()]) > 3:
        return 'No'
    if after_dot not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'