def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    prefix = file_name[:file_name.index('.')]
    if not prefix.isalpha():
        return 'No'
    suffix = file_name[file_name.index('.') + 1:].lower()
    if suffix not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'