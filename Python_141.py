```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    if file_name[:file_name.index('.')] and not file_name[:file_name.index('.')].isalpha():
        return 'No'
    ext = file_name[file_name.index('.') + 1:]
    valid_extensions = ['txt', 'exe', 'dll']
    if ext not in valid_extensions:
        return 'No'
    return 'Yes'