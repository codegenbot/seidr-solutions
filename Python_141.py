```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    before_dot = file_name.split('.')[0]
    after_dot = file_name.split('.')[1].lower()
    if not before_dot or not set(before_dot).issubset('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'):
        return 'No'
    if after_dot not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'