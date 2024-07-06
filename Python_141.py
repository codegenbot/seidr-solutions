```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    name_before_dot = file_name[:file_name.index('.')]
    if not name_before_dot or not name_before_dot[0].isalpha():
        return 'No'
    name_after_dot = file_name[file_name.index('.') + 1:]
    if name_after_dot not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'