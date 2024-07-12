```
def file_name_check(file_name):
    if len([char for char in file_name if char.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    if not file_name[:file_name.index('.')).isalpha():
        return 'No'
    after_dot = file_name[file_name.index('.') + 1:].lower()
    if after_dot not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'