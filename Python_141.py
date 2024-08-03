```
def file_name_check(file_name):
    count = sum(c.isdigit() for c in file_name)
    if count > 3:
        return 'No'
    if '.' not in file_name or file_name.count('.') != 1:
        return 'No'
    pre_dot, post_dot = file_name.split('.')
    if not pre_dot[0].isalpha():
        return 'No'
    allowed_extensions = ['txt', 'exe', 'dll']
    if post_dot.lower() not in allowed_extensions:
        return 'No'
    return 'Yes'