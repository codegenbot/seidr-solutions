```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if '.' not in file_name or file_name.count('.') > 1:
        return 'No'
    if before_dot := file_name.split('.')[0]:
        if not before_dot[0].isalpha():
            return 'No'
    after_dot = file_name.split('.')[1].lower()
    if after_dot not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'