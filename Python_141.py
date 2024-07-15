```
def file_name_check(file_name):
    if len([i for i in file_name if i.isdigit()]) > 3:
        return 'No'
    if '.' not in file_name or file_name.count('.') != 1:
        return 'No'
    dot_index = file_name.index('.')
    if not file_name[:dot_index].isalpha():
        return 'No'
    if file_name[dot_index+1:] not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'