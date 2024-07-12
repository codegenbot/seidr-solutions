```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if '.' not in file_name or file_name.split('.').index('.') == 0:
        return 'No'
    pre_dot, post_dot = file_name.rsplit('.', 1)
    if not pre_dot[0].isalpha():
        return 'No'
    valid_extensions = ['txt', 'exe', 'dll']
    if post_dot not in valid_extensions:
        return 'No'
    return 'Yes'