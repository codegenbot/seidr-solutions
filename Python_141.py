```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    name_before_dot = file_name.split('.')[0]
    if not name_before_dot or not name_before_dot[0].isalpha():
        return 'No'
    extensions = ['txt', 'exe', 'dll']
    if file_name.split('.')[1] not in extensions:
        return 'No'
    return 'Yes'