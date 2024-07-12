```
def file_name_check(file_name):
    if len([i for i in file_name if i.isdigit()]) > 3:
        return 'No'
    if '.' not in file_name or file_name.split('.')[0].isalpha() == False:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    if file_name.split('.')[-1] in ['txt', 'exe', 'dll']:
        return 'Yes'
    else:
        return 'No'