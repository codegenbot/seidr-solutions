```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    if file_name.split('.')[0][0].lower() not in 'abcdefghijklmnopqrstuvwxyz':
        return 'No'
    if not (file_name.lower().split('.')[1] in ['txt', 'exe', 'dll']):
        return 'No'
    return 'Yes'