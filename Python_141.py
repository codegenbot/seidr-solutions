```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    if file_name.split('.')[0][0].lower() not in 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ':
        return 'No'
    if not set(file_name.split('.')[1].split('.')) & {'txt', 'exe', 'dll'}:
        return 'No'
    return 'Yes'