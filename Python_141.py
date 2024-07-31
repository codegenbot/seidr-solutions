```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    pre_dot = file_name.split('.')[0]
    post_dot = file_name.split('.')[1]
    if not pre_dot or not pre_dot[0].isalpha():
        return 'No'
    allowed_extensions = ['txt', 'exe', 'dll']
    if post_dot not in allowed_extensions:
        return 'No'
    return 'Yes'